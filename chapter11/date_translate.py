# descrip: 日期转换
# auth: wolf-li
# date: 2024-6-2
#
# 使用知识：
# year = input("input year, month day")
# print(year, month , day)
# struct_time = time.strptime("30 Nov 00", "%d %b %y")
# print ("返回元组: ", struct_time)
# 返回元组:  time.struct_time(tm_year=2000, tm_mon=11, tm_mday=30, tm_hour=0, tm_min=0, tm_sec=0, tm_wday=3, tm_yday=335, tm_isdst=-1)

import time
import sys

def usage(num):
    match num:
        case 1:
            print("input the year month day get the day of year\nscriptname.py -y year -m month -d day\n")
        case 2:
            print("input the day of year and year get the month and day\nScriptname.py -day date -y year\n")
        case _:
            print("not write")

def input_format(input_str:list, len):
    y, m, d, day = 0, 0, 0, 0
    for i in range(1,len,2):
        match input_str[i]:
            case '-y':
                if int(input_str[i+1]) < 1000:
                    print("wrong input year")
                else:
                    y = input_str[i+1]
            case '-m':
                if int(input_str[i+1]) < 13 and (int(input_str[i+1]) > 0):
                    m = input_str[i+1]
                else:
                    print("wrong input month")
            case '-d':
                if (int(input_str[i+1]) > 32) or (int(input_str[i+1]) < 0):
                    print("wrong input day")
                else:
                    d = input_str[i+1]
            case '-day':
                if (int(input_str[i+1]) > 366) or (int(input_str[i+1]) < 0):
                    print("wrong input day")
                else:
                    day = input_str[i+1]
            case _:
                print("not match")
    return y,m,d, day

def date_to_dateOfday(y: str, m: str, d: str):
    date = y + ' ' +  m + ' ' + d
    struct_time = time.strptime(date, "%Y %m %d")
    print ("一年中的第: %s 天"%(struct_time.tm_yday))


def dateOfday_to_date(day: str, y: str):
    dateOfday = y + ' ' + day
    struct_time = time.strptime(dateOfday, "%Y %j")
    print ("%s年%s月%s日"%(struct_time.tm_year, struct_time.tm_mon, struct_time.tm_mday))

if __name__ == '__main__':
    commands = sys.argv
    if len(commands) == 7:
        year, month, day, date = input_format(commands, len(commands))
        if year == 0 or month == 0 or day == 0:
            usage(1)
        else:
            date_to_dateOfday(year, month, day)
    else:
        year, month, day, date = input_format(commands, len(commands))
        if date == 0 or year == 0:
            usage(2)
        else:
            dateOfday_to_date(date, year)
