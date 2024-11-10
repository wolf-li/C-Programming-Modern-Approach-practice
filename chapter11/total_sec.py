# this script for test practice5.c program
#

import time

now = time.localtime(time.time())
print("local time: %d:%d:%d "%(now.tm_hour, now.tm_min, now.tm_sec))
print("total_tm: ",(now.tm_sec + now.tm_min * 60 + now.tm_hour * 60 * 60))