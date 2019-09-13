int mochila(int *valor_obj,int capacidade,int *peso_obj,int id_obj){
  
  if(id_obj == 0) //verifica se não há objetos disponíveis
    return 0;
  else{
      int x = mochila(valor_obj,capacidade,peso,id_obj-1)
      if(capacidade<peso[id_obj]) //verifica se o peso do objeto é maior que a capacidade da mochila
        return x; 
      else{
        int y = mochila(valor_obj,capacidade-peso[id_obj],peso_obj,id_obj-1)+valor_obj[id_obj];
        return max(x,y);
      }
  }
}
