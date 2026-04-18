/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safiguer <safiguer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:42:49 by safiguer          #+#    #+#             */
/*   Updated: 2026/04/18 17:49:42 by safiguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdlib.h>
#include<stdio.h> 

//void rush01(char ** matrix); 

int main (int argc, char *argv[])
{
	if (argc > 1) {
        printf("%s\n", argv[1]);
    }
	//Error handling. 
	
	//printf("%s",args);
    //printf("%s",args);
	rush01(argv); 
	return (0);
} 