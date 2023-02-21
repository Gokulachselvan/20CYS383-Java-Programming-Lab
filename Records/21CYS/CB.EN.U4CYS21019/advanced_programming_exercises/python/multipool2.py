import multiprocessing,time

start = time.perf_counter()
def cube(n):
    print("The Cube is: {}".format(n * n * n))


def square(n):
    print("The Square is: {}".format(n * n))


if __name__ == "__main__":
    for i in range(1, 100):
        process1 = multiprocessing.Process(target=square, args=(i, ))
        process2 = multiprocessing.Process(target=cube, args=(i, ))
        process1.start()
        process2.start()
        process1.join()
        process2.join()
finish=time.perf_counter()
print(f'Finished in {round(finish-start,2)}second(s)')

