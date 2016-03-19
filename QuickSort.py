def Partition(Array, left, right):
    key = Array[left]
    m = left
    for i in range(left + 1, right + 1):
        if Array[i] <= key:
            m += 1
            Array[i], Array[m] = Array[m], Array[i]
    Array[left], Array[m] = Array[m], Array[left]
    return m

def QuickSort(Array, left, right):
    if left < right:
        m = Partition(Array, left, right)
        QuickSort(Array, left, m - 1)
        QuickSort(Array, m + 1, right)
