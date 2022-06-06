int baldosasDelPiso(int M, int N, int B) {
	int result;
    if (M % B == 0 && N % B){
        result = M/B * (N/B - 1);
    }else if(M % B == 0){
        result = M/B * (N / B);
    }else if(M % B == 0){
        result = N/B * (M / B);
    }else{
        return 0;
    }
    return 0;
}
