/* main.c - A simple hello-world program.

   Copyright (c) 2014, Francisco Jose Monaco  <moanco@icmc.usp.br>

   This file is part of POSIXeg

   POSIXeg is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdlib.h>
#include <stdio.h>

#include <foobar.h>

#include <config.h>

void baz();

int main (int argc, char **argv)
{
  printf ("This is " PACKAGE_STRING " (please, report bugs to " PACKAGE_BUGREPORT ")\n");

  foo();
  bar();

#if HAVE_LONG_FILE_NAMES == 1
  # define LONG_NAME_SUPPORT "support"
#else
  # define LONG_NAME_SUPPORT "does not support"
#endif

  printf ("Platform " LONG_NAME_SUPPORT " long names\n");

  baz();

#if !(HAVE_PTHREAD == 1)
  printf ("Thread functionaly disabled\n");
#endif

  return EXIT_SUCCESS;
}
