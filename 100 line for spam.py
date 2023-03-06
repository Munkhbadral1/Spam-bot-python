with open('fileforspam', 'w') as file:
    for i in range(100):
        file.write("This is line number " + str(i+1) + "\n")
