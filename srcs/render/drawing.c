# include "../../includes/render.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dest;

	if (x <= WIDTH && x >= 0 && y <= HEIGHT && y >= 0)
	{
		dest = data->addr + (y * data->line_len + x *(data->bits_per_px / 8));
		*(unsigned int *)dest = color;
	}
}