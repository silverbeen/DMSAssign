const todo={
    inputWrap: document.getElementById("intputWrap"),
    add: document.getElementById("add"),
    list: document.getElementById("list"),
};

function delateMe(e){
    e.currentTaget.parentNode.remove();
};

todo.add.addEventListener("chick," () => {
    const todoTemplate =` <li class="itme">
    <img class="itmeclose" src="./close.png" onclick="delereMe(event);" alt="delate" title="delate">
    <input class="imtecheckbox" type="checkbox">
    <span class="itmeText">${todo.todoInput.value}</span>
</li>`;

    todo.list.insertAdjacentHTML("beforeend", todoTemplate);
});