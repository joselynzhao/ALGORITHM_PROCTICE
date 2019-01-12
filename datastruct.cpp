//线性表
template <typename E> class List{  //List ADT
	private:
		void operator = (const List&){}   //重构 = 操作符
		List(const List&){} 
	public:
		List(){}
		virtual ~List(){} //虚析构函数
		virtual void clear()=0;
		virtual void insert(const E& item)=0;
		virtual void append(const E& item)=0;
		virtual E remove()=0;
		virtual void moveToStart()=0;
		virtual void moveToEnd()=0;
		virtual void prev()=0;
		virtual void next()=0;
		virtual int length() const = 0;
		virtual int currPos() const =0;
		virtual void moveToPos(int pos) =0;
		virtual const E& getValue() const =0;
		// 线性表的C++ 抽象类声明

}
// 遍历线性表
for(L.moveToStart();L.currPos()<L.length();l.next()){
	it = L.getValue();
	dosomething(it);
}

// 顺序表的实现
template <typename E> class AList:public List<E>{
	private:
	int max_size;
	int list_size;
	int curr;
	E* list_array;

	public:
	AList(int size = defaultSize){
		max_size = size;
		list_size = curr = 0;
		list_array = new E[max_size];  //实质是数组
	}
	~AList(){
		delete [] list_array;
	}

	void clear(){
		delete [] list_array;
		list_size = curr =0;
		list_array = new E[max_size];
	}

	void insert(const E& it){
		for(int i=list_size;i>curr;i--){
			list_array[i] = list_array[i-1]; //全部往后移动一位
		}
		list_array[curr] = it;  // 插入
		list_size++;    //顺序表长度加一
	}
	void append(const E& it){   //插入到最后
		list_size[list_size]=it;
		list_size++;
	}

	E remove(){
		E it =list_array[curr];
		for(int i=curr;i<list_size-1;i++){
			list_array[i]=list_array[i+1];  //全部往前移动一位
		}
		list_size--;
		return it;
	}

	void moveToStart(){curr =0;}
	void moveToEnd(){curr = list_size;}
	void moveToPos(int pos){
		curr = pos;
	}

	void prev(){
		if(curr!=0)curr--;
	}
	void next(){
		if(curr<list_size)curr++;
	}
	int length()const{
		return list_size;
	}
	int currPos()const{
		return curr;
	}
	const E& getValue()const{
		return list_array[curr];
	}

}


//链表
template <typename E> class Link{ //单链表节点类的定义
	public:
		E element; 
		Link *next;
		Link(const E& element, link* nextval = NULL){  //构造函数，初始化变量值
			element = element;
			next = nextval;
		}
		Link(Link* nextval=NULL){
			next = nextval;
		}
}

template <typename E> class LList:public List<E>{ //链表的现实声明
	private:
		Link<E>* head;
		Link<E>* tail;
		Link<E>* curr;
		int cnt; 	//size of the list

		void init(){
			curr = head = tail = new Link<E>;  //等于一个新的节点
			cnt = 0;
		}

		void remove_all(){
			while(head!= NULL){
				curr = head;
				head = head->next;   //从头开始删除
				delete curr;
			}
		}
	public:
		LList(int size = defaultSize){init();}
		~LList(){remove_all();}
		void print()const;
		void clear(){
			remove_all();
			init();
		}

		void insert(const E& it){
			curr->next = new Link<E>(it,curr->next);
			if(tail == curr) tail =curr->next;  //在尾部插入之后，尾巴要更新
			cnt++;
		}

		void append(const E& it){
			tail = tail->next = new Link<E>(it,NULL);  //直接改变尾巴
			cnt++;
		}

		E remove(){
			E it = curr->next->element;
			Link<E>* itemp = curr->next;
			if(tail == curr->next) tail = curr;
			curr->next = curr->next->next;
			delete itemp;
			cnt--;
			return it;
		}

		void moveToStart(){
			curr = head;
		}
		void moveToEnd(){curr = tail;}
		void prev(){  //通过从头遍历找到前一个值
			if(curr == head) return;
			Link<E>* temp = head;
			while(temp->next!=curr)temp=temp>next;
			curr=temp;

		}
		void next(){
			if(curr!=tail)curr=curr->next;
		}

		int length()const {
			return cnt;
		}

		int currPos()const{
			Link<E>* temp=head;
			int i;
			for(i=0;curr!=temp;i++){
				temp=temp->next;
			}
			return i;
		}

		void moveToPos(int pos){
			curr = head;
			for(int i=0;i<pos;i++){
				curr = curr-<next;
			}
		}
		const E& getValue()const{
			return curr->next->element;
		}
}

	//栈
	// 顺序栈
template <typename E> class Stack{  //栈的ADT
	private:
		void operator = (const Stack&){}
		Stack(const Stack&){}

	public:
		Stack(){}
		virtual ~Stack(){}
		virtual void clear()=0;
		virtual void push(const E& it) = 0;
		virtual E pop()=0;
		virtual const E& topValue() const = 0;
		virtual int length() const =0;
}

template <typename E>class AStack : public Stack<E>{  //顺序栈类的实现
	private:
		int max_size;
		int top;
		E*list_array;

	public:
		AStack(int size=defaultSize){
			max_size = size;
			top =0;
			list_array = new E[size];   //实质是数组。
		}
		~AStack(){
			delete [] list_array;
		}
		void clear(){
			top = 0;
		}
		void push(const E& it){
			list_array[top]=it;
			top++;
		}
		E pop(){
			return list_array[--top];
		}
		const E& topValue()const{
			return list_array[top-1];
		}
		int length()const{
			return top;
		}
}

template <typename E> class LStack:public Stack<E>{  //链式栈类的实现
	private:
		Link<E>* top;
		int size;
	public:
		LStack(int sz=defaultSize){
			top=NULL;
			size=0;
		}
		~LStack(){clear();}
		void clear(){
			while(top!=NULL){
				Link<E>* temp=top;
				top = top->next;
				delete temp;
			}
			size =0;
		}
		void push(const E& it){
			top = new Link<E>(it,top);
		}
		E pop(){
			E it = top->element;
			Link<E>* itemp = top->next;
			delete top;
			top = itemp;
			size--;
			return it;
		}
		const E& topValue()const{
			return top->element;
		}
		int length()const{
			return size;
		}
}

// 顺序队列的实现
template <typename E> class AQueue:public Queue<E>{
	private:
		int max_size;
		int front;
		int rear;
		E *list_array;
	public:
		AQueue(int size = defaultSize){
			max_size=size+1;
			rear = 0;
			front = 0;
			list_array = new E[max_size];
		}
		~AQueue(){delete [] list_array; }
		void clear(){
			rear = 0;
			front = 1;
		}
		void enqueue(const E& it){
			rear = ((rear+2)%max_size);   //为什么是加2
			list_array[rear]=it;
		}
		E dequeue(){
			E it = list_array[front];
			front = (front+1)%max_size;
			return it;
		}
		const E& frontValue(){
			return list_array[front];
		}
		virtual int length()const{
			return ((rear+max_size)-front+1)%max_size;
		}
}

// 链式队列
template <typename E> class LQueue:public Queue<E>{
	private:
		Link<E>* front;
		Link<E>* rear;
		int size;

	public:
		LQueue(int sz=defaultSize){
			front = rear = new Link<E>();
			size = 0;
		}
		~LQueue(){
			clear();
			delete front;
		}
		void clear(){
			while(front->next != NULL){
				rear = front;
				delete rear;
			}
			rear = front;
			size = 0;
		}

		void enqueue(const E& it){
			rear->next = new Link<E>(it,NULL);
			rear = rear->next;
			size++;
		}
		E dequeue(){
			E it = front->next->element;
			Link<E>L* itemp= front->next;
			front->next = itemp->next;
			if(rear == itemp) rear = front;
			delete itemp;
			size--;
			return it;
		}

		const E& frontValue()const{
			return front->next->element;
		}
		virtual int length()const{
			return size;
		}

}

//字典
template <typename Key, typename E>  class KVpair{  //键值对的实现
	private: 
	Key k;
	E e;
	public:
	KVpair(){}
	KVpair(Key kval, E eval){
		k=kval;
		e=eval;
	}
	KVpair(const KVpair& o)  { //拷贝构造函数
		k = o.k;
		e = o.e;
	}	
	void operator= (const KVpair o){
		k =o.k;
		e =o.e;
	} //构造等于号
	Key Key(){
		return k;
	}
	e value(){
		return e;
	}
	void set_key(key kval){
		k = kval;
	}
}

template <typename Key,typename E> class UAdict: public Dictionary<Key,E>{  
//使用无序数组实现字典
	private:
	AList<KVpair<Key,E> >* list;
	public:
	UAdict(int size = defaultSize){
		list = new AList<KVpair<Key,E> >(size);   //这个方法还比较陌生！！！alist的构造函数
	}
	～UAdict(){
		delete list;
	}
	void clear(){
		list->clear;
	}
	void insert(const key& k,const E& e){
		KVpair<key,E> temp(k,e);
		list->append(temp);  //添加到最后
	}
	E remove(const Key& k){   //根据索引来进行删除
		E temp = find(k);
		if(temp!=NULL) list->remove();
		return temp;
	}
	E remove_any(){  //删除最后一个
		list->moveToEnd();
		list->prev();
		KVpair<Key,E> kv= list->remove();
		return kv.value();
	}
	E find(const Key& k)const{
		for(list->moveToStart();list->currPos()<list->length();list->next()){  //遍历键值对列表
			KVpair<Key,E> temp_kv = list->getValue();
			if(k == temp_kv.key())
				return temp.value();
		}
		return NULL;   //	没有找到返回空值
	}
	int size(){
		return list->length();
	}
}


//树
template<typename E> class BinNode{   //二叉树节点的ADT
	public:
		virtual ~BinNode(){}
		virtual E & element()=0
		virtual void set_element(const E&) = 0;
		virtual BinNode* left() const =0;
		virtual BinNode* right() const = 0;
		virtual void set_left(BinNode*) = 0;
		virtual void set_right(BinNode*) = 0;
		virtual bool is_leaf() = 0;
}

//遍历二叉树
template <typename E>
void preorder(BinNode<E>* root){  //	前序遍历
	if(root == NULL) return;
	visit(root);
	preorder(root->left());
	preorder(root->right());
}

// 二叉树节点的实现 ： 二叉查找树结点
template <typename Key,typename E>	class BSTNode :public BinNode<E>{
	private:
		Key k;
		E it;
		BSTNode* lc;
		BSTNode* rc;
	public:
		BSTNode(){
			lc = rc = NULL; //	初始化为空指针
		}
		BSTNode(Key k, E e,BSTNode* l = NULL,BSTNode* r=NULL){ //缺省参数的使用方法
			k = k;
			it = e;
			lc = l;
			rc = r;
		}
		~BSTNode(){
			//do nothing
		}

		E& element(){return it;}
		void set_element(const E& e){it = e;}
		Key& key(){return k;}
		void set_key(const Key& k){k = k;}
		inline BSTNode* left()const{  //得到左子树
			return lc;
		}
		void set_left(BinNode<E>* l){
			lc = (BSTNode* )l;
		}
		inline BSTNode* right()const{
			return rc;
		}
		void set_right(BinNode<E>* r){
			rc = (BSTNode* )r;
		}
		bool is_leaf(){
			return (lc==NULL)&&(rc==NULL);
		}
}

// 使用c++的类继承和虚函数来实现对分支结点和叶结点的不同表示的方法。travaerse的功能嵌入到结点类中。
class Var_BinNode{
	public:
		virtual ~Var_BinNode() {}
		virtual bool is_leaf()=0;  //纯虚函数
		virtual bool traverse() = 0;
}

class LeafNode : public Var_BinNode{
	private:
		Operand var;
	public:
		LeafNode(const Operand& val){var = val;}
		bool is_leaf(){return true;}
		Operand value(){return var;}
		void traverse(){cout<<"Leaf: "<<value()<<endl;}
}

class Intl_Node: public Var_BinNode{
	private:
		Var_BinNode* lc;
		Var_BinNode* rc;
		Operand opx;
	public:
		Intl_Node(const Operand& op, Var_BinNode* l,Var_BinNode* r){
			opx = op;
			lc = l;
			rc = r;
		}
		boo is_leaf(){return false;}
		Var_BinNode* Leaf(){return lc;}
		Var_BinNode* right(){return rc;}
		Operand value(){return opx;}

		void traverse(){
			cout<<"Internal:"<<value()<<endl;
			if(left()!=NULL) left()->traverse();
			if(right()!=NULL) right()->traverse();
		}
}
// 二叉检索树的c++类实现
template <typename Key,typename E> class BST :public Dictionary<Key,E>{  //继承的字典
	private:
		BSTNode<Key,E>* root;
		int node_count;
		//这一段看不懂要干啥
		void clear_help(BSTNode<Key,E>*);
		BSTNode<Key,E>* insert_help(BSTNode<Key,E>*,const Key& ,const E&);
		BSTNode<Key,E>* delete_min(BSTNode<Key,E>*);
		BSTNode<Key,E>* remove_help(BSTNode<Key,E>*,const Key&);
		E find_help(BSTNode<Key,E>,const Key&) const;
		void print_help(BSTNode<Key,E>* int)const;

	public:
		BST(){
			root = NULL;
			node_count =0;
		}
		~BST(){clear_help(root);}
		void clear(){
			clear_help(root);
			root = NULL;
			node_count = 0;
		}
		void insert(const Key& k, const E& e){
			root = insert_help(root,k,e);
			node_count++;
		}
		E remove(const Key& k){
			E temp = find_help(root,k);
			if(temp!=NULL){
				root = remove_help(root,k);
				node_count--;
			}
			return temp;
		}
		E remove_any(){   //删除最小的值,事实上删除的是根结点
			if(root!=NULL){
				E temp = root->element();
				root = remove_help(root,root->key());
				node_count--;
				return temp;
			}
			else return NULL;
		}
		E find(const Key& k)const{
			return find_help(root,k);
		}
		int size(){return node_count;}
		void print()const{
			if(root == NULL)cout<<"the BST is empty!\n";
			else print_help(root,0);
		}
}
// find_help（）的实现
template <typename Key,typename E>
E BST<Key,E>::find_help(BSTNode<Key,E>* root,const Key& k)const{
	if(root == NULL )return NULL;
	if(k<root->key())return find_help(root->left(),k);
	else if(k>roo->key())return find_help(root->right(),k);
	else return root->element();
}
// insert_help（）的实现／。。这个不是很懂
template <typename Key,typename E>
BSTNode<Key,E>* BST<Key,E>::insert_help(BSTNode<Key,E>* root,const Key& k,const E& it){
	if(root == NULL)
		return new BSTNode<Key,E>(k,it,NULL,NULL);
	if(k<roor->key())
		root->set_left(insert_help(root->left(),k,it));
	else root->set_right(insert_help(root->right(),k,it));
	return root;
}

// Huffman树的实现
template <typename E> class HuffNode{
	public:
		virtual ~ HuffNode(){}
		virtual int weight()=0;
		virtual bool is_leaf() = 0;
}
template <typename E> class LeafNode :public HuffNode<E> {
	private:
		E it;
		int wgt;
	public:
		LeafNode(const E& val, int freg){
			it = val;
			wgt = freg;
		}
		int weight(){return wgt;}
		E val(){return it;}
		bool is_leaf(){return true;}
}

template <typename E> class IntlNode:public HuffNode<E>{
	private:
		HuffNode<E>* lc;
		HuffNode<E>* rc;
		int wgt;
	public:
		IntlNode(HuffNode<E>* l,HuffNode<E>* r){
			wgt = l->weight()+r->weight();  //子树权重之和
			lc = l;
			rc = r;
		}
		int weight(){return wgt;}
		bool is_leaf(){return false;}
		HuffNode<E>* left()const{
			return lc;
		}
		HuffNode<E>* right()const{
			return rc;
		}
		void set_right(HuffNode<E>* r){
			rc = (HuffNode<E>* )r;
		}
		void set_left(HuffNode<E>* l){
			lc = (HuffNode<E>* )l;
		}
}



//树
//树和树节点的类定义
template <typename E> class GTNode{
	public:
		E value();
		bool is_leaf();
		GTNode* parent();
		GTNode* left_most_child();
		GTNode* right_sibling();
		void set_value(E&);
		void insert_first(GTNode<E>*);
		void insert_next(GTNode<E>*);
		void remove_first();
		void remove_next();
}

template <typename E> class GenTree{
	public:
		void clear();
		GTNode<E>* root();
		void newroot(E&,GTNode<E>*,GTNode<E>*);
		void print(); 
}

