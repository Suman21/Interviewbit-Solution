import javafx.util.Pair; 
class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Map<Integer,List<Pair<Integer,Integer>>> m=new HashMap<Integer,List<Pair<Integer,Integer>>>();
        Set<List<Integer>> ts = new HashSet();

        for(int i=0;i<nums.length;i++)
        {
            for(int j=i+1;j<nums.length;j++)
            {
                if(m.containsKey(nums[i]+nums[j]))
                {
                    List<Pair<Integer,Integer>> A=m.get(nums[i]+nums[j]);
                    A.add(new Pair(i,j));
                    m.put(nums[i]+nums[j],A);
                }
                else
                {
                    List<Pair<Integer,Integer>> A=new ArrayList<Pair<Integer,Integer>>();
                    A.add(new Pair(i,j));
                    m.put(nums[i]+nums[j],A);
                }
            }
        }
        for(int i=0;i<nums.length-1;i++)
        {
            for(int j=i+1;j<nums.length;j++)
            {
                int sum=nums[i]+nums[j];
                if(m.containsKey(target-sum))
                {
                    
                    
                    List<Pair<Integer,Integer>> p=m.get(target-sum);
                    for(int k=0;k<p.size();k++)
                    {
                        if(p.get(k).getValue()==i || p.get(k).getValue()==j || p.get(k).getKey()==i || p.get(k).getKey()==j)
                            continue;
                        List<Integer> A=new ArrayList<Integer>();
                        A.add(nums[p.get(k).getKey()]);
                        A.add(nums[p.get(k).getValue()]);
                        A.add(nums[i]);
                        A.add(nums[j]);
                        Collections.sort(A);
                    
                    ts.add(A);
                    }
                }
                    
            }
        }
        return new ArrayList(ts);
    }
}
