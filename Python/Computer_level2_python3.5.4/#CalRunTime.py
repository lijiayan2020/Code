#CALRUNTIME.PY
import TIME
LIMIT=10*1000*1000

STAR=TIME.PERF_COUNTER()
while True:
    LIMIT-=1
    if LIMIT<=0:
        break
DELTA=TIME.PERF_COUNTER() - STAR
print("程序运行时间是：{}秒".FORMAT(DELTA))
