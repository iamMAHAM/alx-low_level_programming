 # 0x0E. C - Structures, typedef
## 0. Poppy


<img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220501%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220501T105452Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=b2f355030fff59caf40a4513a16323f26e5909f7756e3a654eec2fce3c66801b" width=300px height=300px>

Define a new type struct dog with the following elements: 
* name, type = char *
* age, type = float
* owner, type = char *


## 1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initialize a variable of type struct dog

* Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

## 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

<img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220501%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220501T105452Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=934800d1f2d92a7f37e671f7763ea5bb1ca21855c54ff69b371cb033e6963742" width=300px height=300px>


Write a function that prints a struct dog
* Prototype: void print_dog(struct dog *d);
* Format: see example bellow
* You are allowed to use the standard library
* If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
* If d is NULL print nothing.

## 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

<img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/9ef84b3fd1636992602868e45d3062719326de0e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220501%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220501T105452Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=55f74ce14aa6abb073c0b3cc617b1c515ba41febfb06ec58a3e82384ec953b84" width=300px height=300px>
Define a new type dog_t as a new name for the type struct dog.

## 4. A door is what a dog is perpetually on the wrong side of

<img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/8c1e394774fb8d25e0bbbb73a75ebc7de0c80745.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220501%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220501T105452Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=deee82885545f4e8a570df2b4693a4da6799e370899495c2d4d7c8f47716123b" width=300px height=300px>

Write a function that creates a new dog.

* Prototype: dog_t *new_dog(char *name, float age, char *owner);
* You have to store a copy of name and owner
* Return NULL if the function fails

## 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

<img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/683112dbdd805c36a9b366cede0653dd80da5ec3.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220501%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220501T105453Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=58befd1dd13dbef8c6144d319725474e7396b801fc04932b98dcd504c959129c" width=300px height=300px>

Write a function that frees dogs.

* Prototype: void free_dog(dog_t *d);