const img = document.getElementsByTagName('img')[0];
const h1 =  document.getElementsByTagName('h1')[0];
console.log(h1);
// console.log(img);

let isTrue = false;


setInterval(()=>{

    if(isTrue){
        h1.style.color='#4d194d';
        img.setAttribute('src','https://cdn.britannica.com/s:900x675,c:crop/83/211283-131-3DB62136/Tyrannosaurus-Rex-Struthiomimus-dinosaurs.jpg');
    }
    else{
        h1.style.color='#344e41';
        img.setAttribute('src','https://images.newscientist.com/wp-content/uploads/2020/08/19131539/gpnatp_web.jpg');
    }
    isTrue=!isTrue;

},2000);




