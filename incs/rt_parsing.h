/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_parsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:17:44 by cmeunier          #+#    #+#             */
/*   Updated: 2020/04/29 15:16:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_PARSING_H
# define RT_PARSING_H

void	scene_parsing(t_rt *rt);
void	viewport_parsing(t_scene *scene);
int		add_back_obj(t_objects **start, void *obj, int id);
void	calc_camera_dir(t_camera *camera);
int		add_back_cameras(t_cameras **start, void *camera);
void	loopcameras(t_cameras **start);
int		add_back_light(t_lights **start, void *point_light);
void	add_square_points(t_square *square_0);

void	main_parser(t_rt *rt, char *line, int n);
void	window_parsing(t_rt *rt, char *line, int n);
void	ambient_light_parsing(t_rt *rt, char *line, int n);
void	point_light_parsing(t_rt *rt, char *line, int n);
void	camera_parsing(t_rt *rt, char *line, int n);

void	object_parsing(t_objects **objects);
void	sphere_parsing(t_rt *rt, char *line, int n);
void	plane_parsing(t_rt *rt, char *line, int n);
void	square_parsing(t_rt *rt, char *line, int n);
void	triangle_parsing(t_rt *rt, char *line, int n);
void	cylinder_parsing(t_rt *rt, char *line, int n, int i);

int		p_test_window(t_rt *rt, char *line, int n);
int		p_test_ambient_light(t_rt *rt, char *line, int n);
int		p_test_point_light(char *line);
int		p_test_triangle(char *line);
int		p_test_cylinder(char *line);
int		p_test_square(char *line);
int		p_test_plane(char *line);
int		p_test_sphere(char *line);
int		p_test_camera(t_scene *scene, char *line);

int		check_parsing_tracker(t_scene *scene);
void	init_parsing_tracker(t_scene *scene);
int		check_extension(char *str);

void	skip_spaces(int *i, char *line);
void	skip_numbers(int *i, char *line);
void	skip_nb_spaces(int *i, char *line);
int		string_empty(char *line);
int		skip_comma(int *i, char *line);
t_color	get_color(t_rt *rt, int *i, char *line, int n);
t_vec	get_vec(t_rt *rt, int *i, char *line, int n);

#endif
