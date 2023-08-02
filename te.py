x = 10  # global variable

def my_function():
    
    #x = 20   # modifying the global variable 'x' inside the function
    print(x)

my_function()  # Output: 20
print(x)       # Output: 20