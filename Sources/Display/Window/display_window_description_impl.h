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
**    Harry Storbacka
**    Kenneth Gangstoe
*/

#pragma once

#include "API/Display/Window/display_window.h"
#include <map>
#include "API/Core/Math/rect.h"

namespace clan
{
	class DisplayWindowDescription_Impl
	{
	public:
		virtual ~DisplayWindowDescription_Impl() { }

		std::string title = "Untitled Clanlib Window";
		Rectf position = Rectf(-1.0f, -1.0f, 639.0f, 479.0f);
		bool position_client_area = false;
		bool caption = true;
		bool minimize_button = true;
		bool maximize_button = true;
		bool sysmenu = true;
		bool topmost = false;
		bool no_activate = false;
		bool visible = true;
		bool drop_shadow = false;
		bool fullscreen = false;
		int fullscreen_monitor = 0;
		bool allow_resize = false;
		int flipping_buffers = 2;
		int swap_interval = -1;
		int bpp = 0;
		int refresh_rate = 0;
		DisplayWindow owner;
		bool create_tablet_context = false;
		bool use_cached_window = false;
		bool layered = false;

		DisplayWindowHandle handle;

		int depth_size = 0;
		int stencil_size = 0;
		bool allow_screensaver = true;
		bool update_supported = false;
		int multisampling = 0;

		float extend_frame_left = 0.0f;
		float extend_frame_top = 0.0f;
		float extend_frame_right = 0.0f;
		float extend_frame_bottom = 0.0f;

		WindowType type = WindowType::normal;
	};
}
