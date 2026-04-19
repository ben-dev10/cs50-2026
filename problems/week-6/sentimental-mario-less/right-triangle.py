# right-angled triangle
def build_pyramid(height):
    for i in range(height):
        # print spaces
        print(" " * (height - 1), end="")
        print(("#"*i))