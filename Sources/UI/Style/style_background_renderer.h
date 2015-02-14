/*
**  ClanLib SDK
**  Copyright (c) 1997-2015 The ClanLib Team
**
**  This software is provided 'as-is', without any express or implied
**  warranty.  In no event will the authors be held liable for any damages
**  arising from the use of this software.
**
**  Permission is granted to anyone to use this software for any purpose,
**  including commercial applications, and to alter it and redistribute it
**  freely, subject to the following restrictions:
**
**  1. The origin of this software must not be misrepresented; you must not
**     claim that you wrote the original software. If you use this software
**     in a product, an acknowledgment in the product documentation would be
**     appreciated but is not required.
**  2. Altered source versions must be plainly marked as such, and must not be
**     misrepresented as being the original software.
**  3. This notice may not be removed or altered from any source distribution.
**
**  Note: Some of the libraries ClanLib may link to may have additional
**  requirements or restrictions.
**
**  File Author(s):
**
**    Magnus Norddahl
*/

#pragma once

namespace clan
{
	class Canvas;
	class Image;
	class Style;
	class StyleValue;
	class BoxGeometry;

	class StyleBackgroundRenderer
	{
	public:
		StyleBackgroundRenderer(Canvas &canvas, const BoxGeometry &geometry, const Style &style);
		void render();

	private:
		float get_start_x(int index, const Rectf &clip_box, const Rectf &origin_box, const Sizef &image_size);
		float get_start_y(int index, const Rectf &clip_box, const Rectf &origin_box, const Sizef &image_size);
		Sizef get_image_size(int index, Image &image, Rectf origin_box);
		Rectf get_clip_box(int index);
		Rectf get_origin_box(int index);
		StyleValue get_layer_clip(int index);
		StyleValue get_layer_origin(int index);
		StyleValue get_layer_size_x(int index);
		StyleValue get_layer_size_y(int index);
		StyleValue get_layer_position_x(int index);
		StyleValue get_layer_position_y(int index);
		StyleValue get_layer_attachment(int index);
		StyleValue get_layer_repeat_x(int index);
		StyleValue get_layer_repeat_y(int index);

		Canvas &canvas;
		const BoxGeometry &geometry;
		const Style &style;

		//Rectf initial_containing_box;
		//bool is_root = false;
	};

}
