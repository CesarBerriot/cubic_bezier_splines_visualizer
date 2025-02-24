static struct cbs_point bounce_spline[] =
{	{	.position = { 0 },
		.influence_point_offset = { .x = -.4 }
	},
	{	.position = { .x = .8, .y = 1.2 },
		.influence_point_offset = { .x = -.1 }
	},
	{	.position = { .x = 1, .y = 1 },
		.influence_point_offset = { .x = -.1 }
	},
	{	.position = { .x = 1.3, .y = .7 },
		.influence_point_offset = { .x = -.1, .y = -.17 }
	},
};

/*
static struct cbs_point bounce_spline[] =
{	{	.position = { 0 },
		.influence_point_offset = { .x = -.4 }
	},
	{	.position = { .x = .65, .y = 1.1 },
		.influence_point_offset = { .x = -.3 }
	},
	{	.position = { .x = 1, .y = 1 },
		.influence_point_offset = { .x = -.1 }
	},
	{	.position = { .x = 1.3, .y = .7 },
		.influence_point_offset = { .x = -.1, .y = -.17 }
	},
};
*/

enum { bounce_spline_length = sizeof(bounce_spline) / sizeof(struct cbs_point) };
