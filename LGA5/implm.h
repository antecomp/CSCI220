
namespace implementation {
	//template <class T> 
	template <typename T, typename X> // gives me a ton of compile-time errors???
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