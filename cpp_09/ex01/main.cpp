/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:43:57 by alappas           #+#    #+#             */
/*   Updated: 2024/03/29 23:39:43 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	operation(int first, int second, std::string sign){
	
	int result;
	char operation = sign[0];
	long long temp;
	if (operation == '/' && second == 0)
	{
		std::cerr << "Can't divide a zero!" << std::endl;
		exit (1);
	}
	if (operation == '/' && first == 0)
		return (0);
	switch(operation){
		case '+':
			if ((second > 0 && first > INT_MAX - second) ||
				(second < 0 && first < INT_MIN - second))
			{
				std::cerr << "INT Limit Reached!" << std::endl;
				exit (1);
			}
			result = (second + first);
			break ;
		case '-':
			if ((second > 0 && first < INT_MIN + second) ||
				(second < 0 && first > INT_MAX + second))
			{
				std::cerr << "INT Limit Reached!" << std::endl;
				exit (1);
			}
			result = (second - first);
			break ;
		case '*':
			temp = static_cast<long long>(first) * static_cast<long long>(second);
			if ((temp > INT_MAX)|| (temp < INT_MIN))
			{
				std::cerr << "INT Limit Reached!" << std::endl;
				exit (1);
			}
			result = (second * first);
			break ;
		case '/':
			result = (second / first);
			break ;
	}
	return (result);
}

void	rpn(std::string equation){
	
	std::stack<int> stack;
	std::string temp;
	std::istringstream iss(equation);
	int	first;
	int second;
	while (iss >> temp || stack.size() != 1){
		if (temp.find_first_not_of("0123456789") == std::string::npos)
			stack.push(std::atoi(temp.c_str()));
		else{
			first = stack.top();
			stack.pop();
			second = stack.top();
			if (stack.size() == 0){
				std::cout << "Error" << std::endl;
				exit (1);
			}
			stack.pop();
			stack.push(operation(first, second, temp));
		}
	}
	std::cout << stack.top() << std::endl;
}


int check_input(std::string equation){
	
	std::istringstream iss(equation);
	std::istringstream rpn(equation);	
	std::string temp;
	std::string temp2;
	int	num_token = 0;
	int op_token = 0;
	rpn >> temp;
	rpn >> temp2;
	if ((temp == "+" || temp == "-" || temp == "*" || temp == "/")
		|| temp2 == "+" || temp2 == "-" || temp2 == "*" || temp2 == "/")
		return (1);
	while (iss >> temp){
		if (temp.size() > 1 || temp.find_first_not_of("0123456789+-/* ") != std::string::npos)
			return (1);
		if (temp == "+" || temp == "-" || temp == "*" || temp == "/")
			op_token++;
		else
			num_token++;
		}
	if (--num_token != op_token)
		return (1);
	return (0);
}

int main(int argc, char **argv){
	if (argc != 2)
	{
		std::cerr << "Wrong amount of arguments!" << std::endl;
		return (0);
	}
	std::stack<std::string> stack;
	std::string equation = argv[1];
	if (check_input(equation))
		std::cerr << "Error" << std::endl;
	else
		rpn(equation);
		
}
