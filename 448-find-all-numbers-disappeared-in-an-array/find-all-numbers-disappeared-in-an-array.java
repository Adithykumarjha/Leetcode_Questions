class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        boolean [] miss = new boolean[nums.length+1];
        for(int i=0;i<nums.length;i++){
            miss[nums[i]]= true;
        }
        ArrayList<Integer>mi=new ArrayList<>();
        for(int i=1;i<miss.length;i++){
            if(!miss[i])
                mi.add(i);
        }
        return mi;
    }
}