


userid=input()
password=input()
length=int(input())

arr={'user1':'pass1','user2':'pass2','user3':'pass3','user4':'pass4','user5':'pass5'}

if userid in arr and password in arr[userid]:
    if length < 1:
        pass

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

        print(f'Welcome {userid} and generated token is:token-{palindrome}.')
else:
    print('UserId or password is not valid,pls try again')
