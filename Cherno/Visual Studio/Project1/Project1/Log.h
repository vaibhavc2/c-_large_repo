//#pragma once
//both the above statement and the ifndef part mean the same: They don't let the file included in a signle translation unit (in a single .cpp file) more than once

#ifndef _LOG_H
#define _LOG_H

void initLog();
void Log(const char* message);

#endif