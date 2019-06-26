    def searchRange(self, A, B):
            first=-1
            start=0
            end=len(A)-1
    
            while(start<=end):
                mid = int(start + (end - start)//2)
                if (mid == 0 or B > A[mid - 1]) and (A[mid] == B):
                    first = mid
                    break
                elif B > A[mid]:
                    start = mid + 1
                else:
                    end = mid - 1
            
            if first == -1:
                return [-1,-1]
            last=-1
            start=0
            end=len(A)-1
            while (start<=end):
                mid = int(start + (end - start)//2)
                if (mid == len(A)-1 or B < A[mid + 1] ) and (A[mid] == B):
                    last = mid
                    break;
                elif B < A[mid]:
                    end = mid - 1
                else:
                    start = mid + 1
            
            return [first,last]
        