const todo = {
    todoInput: document.getElementById("text"),
    add: document.getElementById("add"),
    list: document.getElementById("list"),
  };

  function deleteMe(e) {
    e.currentTarget.parentNode.remove();
  };

  todo.add.addEventListener("click", () => {
    const todoTemplate = `<li class="itme">
    <img class="itmeclose" src="./close.png" onclick="delereMe(event);" alt="delate" title="delate">
    <input class="imtecheckbox" type="checkbox">
    <span class="itmeText">${todo.text.vl}</span>
    
</li>`;

    todo.list.insertAdjacentHTML("beforeend", todoTemplate);
  });