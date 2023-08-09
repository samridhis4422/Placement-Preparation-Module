class Solution : def topKFrequent(self, nums
                                  : List[int], k
                                  : int)
                     ->List[int] : d =
{}
        arr=[]
        for i in nums:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        for ele in d.keys():
            arr.append((-d[ele],ele))
        heapify(arr)
        l=0
        res=[]
        while(l<k):
            ele=heappop(arr)
            res.append(ele[1])
            l+=1
        return res;