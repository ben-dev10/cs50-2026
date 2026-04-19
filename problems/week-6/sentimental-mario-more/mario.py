# mario-more

def get_int(prompt):
    while True:
        try:
            integer = int(input(prompt))

            if 1 <= integer <= 8:
                return integer
        except ValueError:
            pass # on ValueError, re-prompt


def build_pyramid(height):
    for i in range(height):
        # left hashes
        print(" " * (height - i), end="")
        print("#" * (i + 1), end="")

        print(" ", end="")

        # print right hashes
        print("#" * (i+1), end="")
        print(" "* (height - i))


height = get_int("Height: ")
build_pyramid(height)