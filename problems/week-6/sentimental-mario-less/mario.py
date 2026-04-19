# mario-less

def get_int(prompt):
    while True:
        try:
            integer = int(input(prompt))

            if 1 <= integer <= 8:
                return integer
        except ValueError:
            pass # on ValueError, re-prompt
        

# right-angled triangle
def build_pyramid(height):
    for i in range(height):
        # print spaces
        print(" " * (height - i), end="")
        print(("#"* (i+1)))


# Get height
height = get_int("Height: ")
build_pyramid(height)



