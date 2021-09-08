import module


def main():
    module.printHello()

    print(f"Circle area with r = 2.5: {module.calcCircleArea(2.5)}")

    v1 = [1, 2, 3]
    v2 = [4, 5, 6]
    print(module.calcProduct(v1, v2))


if __name__ == "__main__":
    # clang++ -O3 -Wall -shared -std=c++14 -fPIC `python3 -m pybind11 --includes` module.cpp -o module`python3-config --extension-suffix`
    main()
