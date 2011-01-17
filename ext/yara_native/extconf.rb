#  yara-ruby - Ruby bindings for the yara malware analysis library.
#  Eric Monti
#  Copyright (C) 2011 Trustwave
#  
#  This program is free software: you can redistribute it and/or modify it 
#  under the terms of the GNU General Public License as published by the 
#  Free Software Foundation, either version 3 of the License, or (at your
#  option) any later version.
#  
#  This program is distributed in the hope that it will be useful, but 
#  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
#  or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
#  for more details.
#  
#  You should have received a copy of the GNU General Public License along
#  with this program. If not, see <http://www.gnu.org/licenses/>.
#  

require 'mkmf'
require 'rbconfig'

extension_name = "yara_native"

dir_config(extension_name)

unless have_library("yara") and
       find_header("yara.h", "/usr/local/include")
  raise "You must install the yara library"
end

create_makefile(extension_name)

