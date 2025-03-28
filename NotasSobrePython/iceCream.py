from icecream import ic

def output_to_file(text):
    with(open('debug_log.txt', 'a')) as file:
        file.write(text + '\n') 

def add(a, b):
    return a + b

def myFunction(value):
    if value%2 == 0:
        ic()
        return True
    else:
        ic()
        return False

def main():
    ic.configureOutput(prefix='DEBUG| ', outputFunction=output_to_file,
                       includeContext=True)
    
    ic(add(1, 2))
    myFunction(2)
    myFunction(3)
    ic(add(3, 4))


if __name__ == '__main__':
    main()

    