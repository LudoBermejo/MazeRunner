using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class Generate : MonoBehaviour {


	public class Neighbour {

		public int x;
		public int y;

		public Neighbour(int px, int  py) {
			x = px;
			y = py;
		}

	}

	public GameObject wall;
	public GameObject ceil;
	public GameObject cube;
	public GameObject floor;
	public GameObject exit;
	public GameObject finish;

	int rowStart = 6;
	int colStart = 6;
	int[][] rows; 
	int[][] cols;
	int[][] positions;
	ArrayList visited;

	ArrayList items = new ArrayList ();

	Vector2 here;

	// Use this for initialization
	void Start () {
		generateMaze (rowStart, colStart);
		drawMaze (); 
	}

	void generateMaze(int width, int height) {

		visited = new ArrayList ();

		int totalCells = (width * height) - 1;
		rows = new int[width][];
		cols = new int[width][];
		positions = new int[width][];

		for(int i=0;i<=width-1;i++) { // Initialize all walls to 1 and visited to 0
			rows[i] = new int[height];
			cols[i] = new int[height];
			positions[i] = new int[height];
			for(int j=0;j<=height-1;j++) {
				rows[i][j] = 1;
				cols[i][j] = 1;
				positions[i][j] = 0;
				
			}
		}

		Neighbour here = new Neighbour (Random.Range (0, width - 1), Random.Range (0, height - 1));

		here.x = 0;
		here.y = 0;
	
		while (totalCells > 0) {
			positions[here.x][here.y] = 1;
			ArrayList list = new ArrayList();
			if(here.x-1 >= 0) {
				Neighbour left = new Neighbour(here.x-1, here.y);
				list.Add (left);
			}
			if(here.x+1 < width) {
				Neighbour right = new Neighbour(here.x+1, here.y);
				list.Add (right);
			}
			if(here.y-1 >= 0) {
				Neighbour top = new Neighbour(here.x, here.y-1);
				list.Add (top);
			}
			if(here.y+1 < height) {
				Neighbour down = new Neighbour(here.x, here.y+1);
				list.Add (down);
			}



			// Just to know if I found a valid neighbour
			bool found = false;

			while(list.Count>0 && !found) {
			
				int r = Random.Range (0,list.Count);
		
				Neighbour n = (Neighbour)list[r]; 

				list.RemoveAt(r);

				if(n.x >= 0 && n.y >= 0 && n.x < width && n.y < height) {
					if( positions[n.x][n.y] == 0) {

						found = true;
						// Then is visited now
						positions[n.x][n.y] = 1;

						// And I need to know if I need to remove a col or a row (floor or wall, if you know what I mean);
						if(n.x > here.x) {
							cols[here.x][here.y] = 0;
						} else if (n.x < here.x) {
							cols[n.x][n.y] = 0;
						} else if(n.y > here.y) {
							rows[here.x][here.y] = 0;
						} else if(n.y < here.y) {
							rows[n.x][n.y] = 0;
						}

						here = n;
						totalCells--;
						visited.Add (here);
					}

				}

			}


			
			if(!found) {
				here = (Neighbour)visited[visited.Count-1]; 
				visited.RemoveAt (visited.Count-1);
			} 
		}

	}

	public void replay() {

		internalDestroy ();
		rowStart += 2;
		colStart += 2;
		generateMaze (rowStart, colStart);
		drawMaze (); 
	}

	void internalDestroy() {
		while (items.ToArray().Length>0) {
			GameObject.Destroy ( (GameObject)items[0]);
			items.RemoveAt (0);
		}
	}

	void drawMaze() {

		GameObject c = Instantiate (cube);
		c.transform.localScale += new Vector3(rows.Length*3,0,0);
		c.transform.position += new Vector3 (rows.Length*3/2-1, 0, -2);

		GameObject c2 = Instantiate (cube);
		c2.transform.localScale += new Vector3(rows.Length*3,0,0);
		c2.transform.position += new Vector3 (rows.Length*3/2-1, 0, (rows[0].Length)*3-1);

		GameObject c3 = Instantiate (cube);
		c3.transform.localScale += new Vector3(0,0,rows.Length*3+1);
		c3.transform.position += new Vector3 (-2, 0, (rows [0].Length) * 3/2-1.5f);

		GameObject c4 = Instantiate (cube);
		c4.transform.localScale += new Vector3(0,0,rows.Length*3+1);
		c4.transform.position += new Vector3 (rows.Length*3-1, 0, (rows [0].Length) * 3/2-1.5f);

		GameObject f = Instantiate (floor);
		f.transform.localScale += new Vector3(rows.Length*3,1,rows.Length*3+1);
		f.transform.position += new Vector3 (rows.Length*3/2-1.5f, -4, rows[0].Length*3/2-1.5f);

		items.Add (c); items.Add (c2); items.Add (c3); items.Add (c4); items.Add (f);

		for(int  i=0;i<=rows.Length-1;i++) {
			for(int j=0;j<=cols[0].Length-1;j++) {
				
				// Do we have a ceiling
				if(rows[i][j]==1) {
					GameObject ceiling = Instantiate (ceil);

					Vector3 pos = new Vector3( i*3, 0, (j)*3);
					ceiling.transform.position += pos;
					items.Add (ceiling);
				}
				
				// do we have a left wall?
				if(cols[i][j]==1) {
					GameObject leftwall = Instantiate (wall);
					Vector3 pos = new Vector3( (i)*3, 0, (j)*3);
					leftwall.transform.position += pos;
					items.Add (leftwall);
				}
			}
		} 

		GameObject e = Instantiate (exit);
		e.transform.position = new Vector3 (rows.Length*3-1.5f-2, -0.5f, rows[0].Length*3-3);
		items.Add (e);
		GameObject fi = Instantiate (finish);
		fi.transform.position = new Vector3 (rows.Length*3-1.5f-2, -0.5f, rows[0].Length*3-3);
		items.Add (fi);


	}

	
}
