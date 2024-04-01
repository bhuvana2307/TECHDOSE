class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        def partition(arr,l,h):
            i=l-1
            pivot=nums[h] 
            for j in range(l,h):
                if arr[j]>pivot:
                    i+=1
                    arr[i],arr[j]=arr[j],arr[i]
            arr[i + 1], arr[h] = arr[h], arr[i + 1]
            return i+1 

        def quicksort(nums,l,h):
            if l<=h:
                p=partition(nums,l,h)
                if (k-1)<p:
                    return quicksort(nums,l,p-1)
                elif (k-1)>p:
                    return quicksort(nums,p+1,h)
                else:
                    return nums[p]
       
        return quicksort(nums,0,len(nums)-1)
