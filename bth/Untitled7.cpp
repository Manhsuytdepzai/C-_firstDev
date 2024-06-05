int timMSNV(danhsach ds,int d)
{
	for(int i=0;i<ds.n;i++)
	{
		if(ds.a[i].msnv==d)
		{
			return i;
			break;
		}
	}
	return -1;
}
//
void xoanv(danhsach ds,int d)
{
	int vt=timMSNV(ds,d);
	if(vt==-1)
		printf("\nkhong tim thay msnv %d muon xoa",d );
	else
		for(int i=vt;i<ds.n;i++)
		{
			ds.a[i]=ds.a[i+1];
			ds.n--;
		}
}
//
