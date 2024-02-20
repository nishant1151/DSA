def generate_palindrome_of_length(length):
    if length < 1:
        return "Invalid input. Length should be at least 1."

    # For even length, generate half and concatenate the reverse
    if length % 2 == 0:
        half_length = length // 2
        first_half = str(10 ** (half_length - 1))
        palindrome = int(first_half + first_half[::-1])

    # For odd length, generate half and concatenate the reverse without the first digit
    else:
        half_length = (length - 1) // 2
        first_half = str(10 ** half_length)
        palindrome = int(first_half + first_half[:-1][::-1])

    return palindrome

# Take input from the user
digits = int(input("Enter the number of digits for the palindrome: "))

# Generate and print the palindrome number
result = generate_palindrome_of_length(digits)5
print(f"Palindrome number with {digits} digits: {result}")
