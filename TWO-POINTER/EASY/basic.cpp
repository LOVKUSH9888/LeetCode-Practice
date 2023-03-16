// #Brute force technique
# Naive solution to find if there is a
# pair in A[0..N-1] with given sum.


def isPairSum(A, N, target):
for i in range(N):
for j in range(N):
# as equal i and j means same element
if(i == j):
continue
# pair exists
if (A[i] + A[j] == target):
return True
# No pair found with given sum
return 0
# Driver code
arr = [1,2,3,4,6]
target = 6
print(isPairSum(arr, len(arr), target))

//##############################################################

// # Two pointer technique based solution to find


# if there is a pair in A[0..N-1] with a given sum.


def isPairSum(A, N, target):


# represents the first pointer
pointer1 = 0


# represents second pointer
pointer2 = N - 1


while(pointer1 < pointer2):

# If we find a pair
if (A[pointer1] + A[pointer2] == target):
return True


# If sum of elements at current
# pointers is less, we move towards
# higher values by doing pointer += 1
elif(A[pointer1] + A[pointer2] < target):
pointer1 += 1


# If sum of elements at current
# pointer is more, we move towards
# lower values by doing pointer2 -= 1
else:
pointer2 -= 1
return False


# Driver Code
arr = [1,2,3,4,6]


# value to search
target = 6


print(isPairSum(arr, len(arr), target))