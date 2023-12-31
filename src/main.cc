/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2021 dom <dom@flamingo>
 * 
 * sudukosolver is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * sudukosolver is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <array>
#include <string>
#include <stdio.h>
#include <time.h>

#include "solve.h"
#include "generate1.h"

using namespace std;

string fname = "./res/unsolved-45.txt";

// ***********************************************************

int main()
{
	//solve_testboard();

	solve_multiboard(fname);

	//generate_board_method1();

	return 0;
}

