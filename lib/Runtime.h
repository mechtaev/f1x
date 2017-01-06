/*
  This file is part of f1x.
  Copyright (C) 2016  Sergey Mechtaev, Gao Xiang, Abhik Roychoudhury

  f1x is free software: you can redistribute it and/or modify
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

#pragma once

#include <boost/filesystem.hpp>
#include "F1XConfig.h"
#include <string>
#include <sstream>

class Runtime {
 public:
  Runtime(const boost::filesystem::path &workDir, const Config &cfg, const std::string source, const std::string header);

  void setPartiotion(uint locId, uint candidateId, std::vector<uint> space);
  std::vector<uint> getPartiotion(uint locId);
  boost::filesystem::path getWorkDir();
  boost::filesystem::path getSource();
  boost::filesystem::path getHeader();
  bool compile();

 private:
  boost::filesystem::path workDir;
  Config cfg;
  
  std::string RUNTIME_SOURCE_FILE_NAME;
  std::string RUNTIME_HEADER_FILE_NAME;
};
