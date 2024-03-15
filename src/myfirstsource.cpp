//
// Created by Schleimer on 15.03.2024.
//
#include <obs-source.h>
struct obs_source_info myfirstsource {
	.id 		= "schleimer",
	.type         = OBS_SOURCE_TYPE_INPUT,
	.output_flags = OBS_SOURCE_VIDEO,
	.get_name     = my_source_name,
	.create       = my_source_create,
	.destroy      = my_source_destroy,
	.update       = my_source_update,
	.video_render = my_source_render,
	.get_width    = my_source_width,
	.get_height   = my_source_height
};