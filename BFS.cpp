void BFS(Graph G,int v)  //аз╫с╠М 
{
	printf("%d",);
	visited[v]=true;
	Initqueue(Q);
	Enqueue(Q,v);
	while(!QueueEmpty(Q))
	{
		Dequeue(Q,u);
		for(w=FirstAdjVex(G,u);w>=0;w=NextAdjVex(G,u,w))
	    if(!visited[w])
	    {
		printf("%d",w);
	    visited[w]=true;
	    EnQueue(Q,w);
}
	}
}
