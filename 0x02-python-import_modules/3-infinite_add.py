#!/usr/bin/python3

if __name__ == "__main__":
    import sys

    def add_arg(argv):
        n = len(argv) - 1

        if n == 0:
            print("{:d}".format(n))
        else:
            i = 1
            add = 0
            while i <= n:
                add += int(argv[i])
                i += 1
            print("{:d}".format(add))

    add_arg(sys.argv)
