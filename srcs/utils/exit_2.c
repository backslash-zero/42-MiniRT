/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmeunier <cmeunier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 16:55:47 by cmeunier          #+#    #+#             */
/*   Updated: 2020/05/01 16:24:50 by cmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/minirt.h"

void	exit_formatfail(void)
{
	perror("Error");
	write(1, "\e[1;31mFile extension is not correct.\n\e[0m", 38);
	exit(FAILURE);
}

void	exit_openfail(void)
{
	perror("Error");
	write(1, "\e[1;31mFile does not exist or cannot be opened.\n\e[0m", 48);
	exit(FAILURE);
}

void	free_lights(t_lights *lights)
{
	t_lights *tmp;

	while (lights)
	{
		tmp = lights;
		lights = lights->next;
		free(tmp->point_light);
		free(tmp);
	}
}

void	free_objects(t_objects *objects)
{
	t_objects *tmp;

	while (objects)
	{
		tmp = objects;
		objects = objects->next;
		free(tmp->obj);
		free(tmp);
	}
}

void	free_cameras(t_cameras *cameras)
{
	t_cameras *tmp;
	t_cameras *first;

	first = cameras;
	while (cameras)
	{
		tmp = cameras;
		cameras = cameras->next;
		free(tmp->camera);
		free(tmp);
		if (cameras == first)
			cameras = NULL;
	}
}
