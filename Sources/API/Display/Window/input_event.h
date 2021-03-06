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
*/


#pragma once

#include "input_device.h"
#include "keys.h"
#include "../../Core/Math/point.h"

namespace clan
{
/// \addtogroup clanDisplay_Input clanDisplay Input
/// \{

/// \brief Input event class.
class InputEvent
{
public:
	/// \brief Event types.
	enum Type
	{
		no_key            = 0,
		pressed           = 1,
		released          = 2,
		doubleclick       = 3,
		pointer_moved     = 4,
		axis_moved        = 5,
		proximity_change  = 6
	};

/// \name Construction
/// \{

public:
	/// \brief Constructs a 'NoKey' key.
	InputEvent();

	~InputEvent();

/// \}
/// \name Attributes
/// \{

public:

/// \}
/// \name Operations
/// \{

public:
	/// \brief The exact input
	InputCode id;

	/// \brief Contains the value (0 to x) for certains InputCode types that have a variable output identifier (for example, joystick button identifers, or joystick axis...)
	int id_offset;

	/// \brief Character sequence generated by event.
	/// A key press can generate one, none or multiple characters. The reason
	/// for this are deadkeys, i.e. press ^ + a and get ^; the first press
	/// would generate no key and the second one, in case that the second key
	/// being pressed doesn't support the ^ it would generate two characters
	/// (i.e. ^ + 5 => "", "^5")
	std::string str;

	/// \brief Event type.
	Type type;

	/// \brief Device that event originates from.
	InputDevice device;

	/// \brief Mouse position at event time.
	Pointf mouse_pos;

	/// \brief Mouse actual position at event time.
	Point mouse_device_pos;

	/// \brief Axis position.
	double axis_pos;

	/// \brief The repeat count for this event.
	/// Contains the number of times the keystroke has auto-repeated as a
	/// result of the user holding down the key.
	int repeat_count;

	/// \brief State of modifier keys.
	bool alt;
	bool shift;
	bool ctrl;

/// \}
/// \name Implementation
/// \{

private:

/// \}
};

}

/// \}
