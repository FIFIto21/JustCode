#Reversing an array list

List = [None] * 9

def GetListInputs():
    i = 0
    print("Give 9 values for the list")
    while 9 > i:
        List[i] = input()
        i = i + 1

def reverse():
    StarIndex = 0
    EndIndex = len(List)-1
    while EndIndex > StarIndex:
        List[StarIndex], List[EndIndex] = List[EndIndex], List[StarIndex]
        StarIndex =+ 1
        EndIndex =- 1

if __name__ == '__main__':
    GetListInputs()
    print("List before reverse = ",List)
    reverse()
    print("List after reverse = ",List)