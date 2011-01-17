/*
 *  yara-ruby - Ruby bindings for the yara malware analysis library.
 *  Eric Monti
 *  Copyright (C) 2011 Trustwave
 *  
 *  This program is free software: you can redistribute it and/or modify it 
 *  under the terms of the GNU General Public License as published by the 
 *  Free Software Foundation, either version 3 of the License, or (at your
 *  option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful, but 
 *  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 *  or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 *  for more details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with this program. If not, see <http://www.gnu.org/licenses/>.
 *  
*/

#ifndef RB_RULES_H_GUARD
#define RB_RULES_H_GUARD

#include <yara.h>
#include "ruby.h"

static VALUE class_Rules;

void init_rules(VALUE ruby_namespace);

#endif
