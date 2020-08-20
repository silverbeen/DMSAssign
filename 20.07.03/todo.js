const todo = {
    todoInput: document.getElementById("todoinput"),
    add: document.getElementById("add"),
    list: document.getElementById("list"),
  };

  function deleteMe(e) {
    e.currentTarget.parentNode.remove();
  };

  todo.add.addEventListener("click", () => {
    const todoTemplate = `<li class="item">
  <img class="itemDelete" onclick="deleteMe(event);" src="./close.svg" alt="delete" title="delete">
  <input class="itemCheckbox" type="checkbox" name="checkbox" id="checkbox">
  <span class="itemText">${todo.todoInput.value}</span>
</li>`;

    todo.list.insertAdjacentHTML("beforeend", todoTemplate);
  });