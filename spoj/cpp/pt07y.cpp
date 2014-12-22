#include<cstdio>
#include<vector>
using namespace std;

class graph
{

	long long int m;	// No.of edges
	long long int n;	// No.of vertices
	vector<long long int> *adj;
	public:
		graph(long long int n,long long int m)
		{
			this->n = n;
			this->m = m;
			adj = new vector<long long int>[n+1];
		}
		void create_adjacents()
		{
			
			long long int u,v;
			for(long long int i=0;i<m;i++){
				scanf("%lld %lld",&u,&v);
				adj[u].push_back(v);		
				adj[v].push_back(u);
			}
		}
		bool is_cyclic()
		{
			bool *visited = new bool[n+1];
			for(long long int i=1;i<=n;i++)
				visited[i] = false;
			
			for(long long int u=0;u<n;u++)
				if(!visited[u])
					if(is_cyclic(u,visited,-1))
						return true;
			return true;
		}
		bool is_cyclic(long long int v,bool visited[],long long int parent)
		{
			visited[v]=true;
			for(vector<long long int>::iterator it = adj[v].begin();it!=adj[v].end();++it)
			{
				if(!visited[*it])
				{
					if(is_cyclic(*it,visited,v))
						return true;
				}
				else if(*it!=parent)
					return true;
			}
			return false;
		}
};
int main()
{
	long long int n,m;

	scanf("%lld %lld",&n,&m);
	if(m!=n-1) {
		printf("NO\n");
		return 0;
	}
	graph G(n,m);
	G.create_adjacents();
	if(!G.is_cyclic())
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

