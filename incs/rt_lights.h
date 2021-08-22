/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_lights.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmeunier <cmeunier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:46:40 by cmeunier          #+#    #+#             */
/*   Updated: 2020/03/12 19:27:50 by cmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_LIGHTS_H
# define RT_LIGHTS_H

void	process_light(t_scene *scene, t_ray *ray);
void	point_light(t_scene *scene, t_ray *ray);
void	light_if_shadow(t_ray *ray, double i, t_light_vec l_v);
void	ambient_light(t_scene *scene, t_ray *ray);
void	ambient_lighting(t_color *color, t_scene *scene);
void	light_calc(t_color *color, double lum, t_color light_color);
void	add_light(t_color *color, double new_i, t_color point_light_color);
void	convert_light_ray(t_ray *ray, t_ray *light_ray, t_light_vec *light_vec);
void	specular_light(t_ray *ray, double specular, t_light_vec *light_vec);
void	specular_light_processing_plane(t_ray *ray, t_light_vec *light_vec);
void	specular_light_processing(t_ray *ray, t_light_vec *light_vec);
int		shadow_intersection(t_ray *l_ray, t_scene *scene, t_light_vec *l_vec);

#endif
