
namespace implementation {
	//template <class T> 
	template <typename T, typename X>
	class holds5 {
		public:
		holds5(T a, T b, T c, T d, T e) {
			_data = new T[5]{
				a, b, c, d, e
			};
		};
		T getItem(int index) {
			return _data[index];
		}
		//template <class X>
		// this template method technically doesnt exist until it is declared with a certain datatype
		// when we declare holds5 <string, string>; it inserts the template code, replacing T and X with string
		// then it compiles
		void print_five (X item) {
			for(int i = 0; i < 5; i++) {
				std::cout << item << " ";
			}
			std::cout << std::endl;
		}

		private:
		T* _data;

	};
}